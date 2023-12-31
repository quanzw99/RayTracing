# Ray Tracing

## Building and Running

### Cmake Commands
```
1. mkdir build
2. cd ./build
3. cmake ..
# using `--config` to set Release/Debug version
4. cmake --build . --config Release
```

### Cmake GUI on Windows
```
1. Open CMake GUI on windows
2. For "Where is the source code:", to set the location of the source code, like `D:/code/RayTracingDemo`
3. Add the folder `build` with in this location.
4. For "Where to build the banaries", set this to the `D:/code/RayTracingDemo/build`
5. Click `Configure`
6. For "Specify the generator for this project", set this to your version of VS
7. Click `Configure` again
8. Click `Generate`
10. In File Explorer, navigate to build directory and double click the newly-created `.sln`
11. Build in VS
```

### Running test
```
cd ./build/Release/
.\inOneWeekend.exe > image.ppm
```

### Commands
```
.\run.bat
.\test.bat
```


## Reference

Origin Repository: https://github.com/RayTracing/raytracing.github.io