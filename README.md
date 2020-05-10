# C++ Application with 'CMake' and 'Hunter'

## Use Installing Hunter
```bash
cd YOUR_CMAKE_PROJECT_ROOT
wget https://raw.githubusercontent.com/cnruby/install_hunter/master/install_hunter.cmake
cmake -Dversion=0.23.253 -P ./install_hunter.cmake
```

## Use Example
```bash
git clone https://github.com/cnruby/install_hunter.git
cd install_hunter/example
wget https://raw.githubusercontent.com/cnruby/install_hunter/master/install_hunter.cmake
# OR
# cp ../install_hunter.cmake .
cmake -Dversion=0.23.253 -P ./install_hunter.cmake
cmake -GNinja -Bbuild/ -H.
cmake --build build/
./build/main
```

## @cnruby
- [C++ Application with 'CMake' - Youtub Videos](https://github.com/cnruby/w3h1_cmake)
- [@Gitter](https://gitter.im/cnruby)
- [@Blog](https://www.blogger.com/blogger.g?tab=mj1&blogID=19758264#allposts/postNum=0)
- [@Twitter](https://twitter.com/cnruby)

## References
- [Learning CMake: A beginner's guide](https://tuannguyen68.gitbooks.io/learning-cmake-a-beginner-s-guide/content/index.html)
- [Modern CMake](https://cliutils.gitlab.io/modern-cmake/)
- [CMake Community Wiki](https://gitlab.kitware.com/cmake/community/-/wikis/home)
- [CMake BASIS](https://cmake-basis.github.io/quickstart.html)