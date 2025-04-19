# Documentation - TestApp Windows

## Compilation locale

- Windows 10/11 64 bits
- Qt 6.8.3
- CMake 3.22+
- Ninja + Visual Studio

```bash
git clone https://github.com/<ton-username>/cyber-ribouldingue-test-windows.git
cd cyber-ribouldingue-test-windows
cmake -B build -G "Ninja" -DCMAKE_BUILD_TYPE=Release
cmake --build build
Exécution

build\TestApp.exe

Tests

cd build
ctest --output-on-failure

Licence

MIT License


