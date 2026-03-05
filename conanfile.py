import os

from conan import ConanFile
from conan.tools.cmake import (
    CMake
)


class ExampleRecipe(ConanFile):
    generators = "CMakeDeps", "CMakeToolchain"

    settings = "os", "compiler", "build_type", "arch"

    options = {"shared": [True, False], "fPIC": [True, False]}

    default_options = {"shared": False, "fPIC": True}

    def requirements(self):
        self.requires("qt/6.8.3")

    def layout(self):
        self.folders.build = "cmake-build-{}".format(str(self.settings.build_type).lower())
        self.folders.generators = os.path.join(os.path.curdir, "conan_find_libs")
        self.cpp.build.libdirs = os.path.join(self.folders.generators, "lib")
        self.cpp.build.bindirs = os.path.join(self.folders.generators, "bin")
        self.folders.imports = self.folders.build
        self.folders.source = "src"

    def configure(self):
        self.options["qt"].shared = True

    def source(self):
        assert self.source_folder == os.getcwd()

    def generate(self):
        print("CWD: ", os.getcwd())
        print("SOURCE: ", self.source_folder)
        print("BUILD: ", self.build_folder)
        print("BUILD2: ", self.cpp.build)
        print("LIBDIRS: ", self.cpp.build.libdirs)
        print("BINDIRS: ", self.cpp.build.bindirs)

    def package(self):
        cmake = CMake(self)
        cmake.install()

    def deploy(self):
        self.copy(self, "*", src=self.package_folder, dst=self.deploy_folder)
