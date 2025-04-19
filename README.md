# TestApp - Version Windows

Projet de démonstration C++/Qt pour Windows 64 bits.

## Compilation locale (manuel)

Prérequis :
- Windows 10/11 64 bits
- Qt 6.8.3
- CMake 3.22+
- Visual Studio 2019/2022

### Commandes pour compiler (PowerShell ou CMD)

```bash
git clone https://github.com/<ton-username>/cyber-ribouldingue-test-windows.git
cd cyber-ribouldingue-test-windows
mkdir build
cd build
cmake .. -G "Ninja" -DCMAKE_BUILD_TYPE=Release
cmake --build .
Lancer les tests

cd build
ctest --output-on-failure
Artefact GitHub Actions

À chaque push, GitHub Actions :

    Compile l’application

    Exécute tous les tests

    Génère un fichier TestApp-windows.zip prêt à télécharger

Licence

MIT License


---

# 🛠️ 4. Points spécifiques Windows

| Éléments                  | Détail |
|:---------------------------|:-------|
| Compilation                | MSVC (`windows-latest` GitHub Actions utilise VS2022) |
| Format du binaire          | `.exe` |
| Test Qt                    | Obligé de forcer `QT_QPA_PLATFORM=offscreen` (comme sur Linux) |
| Packaging                  | Un simple fichier `.zip` |
| Dépendances Qt             | Pour le moment pas de `windeployqt`, on garde ça simple |

---

# 🎯 Résumé immédiat de ce que tu dois faire

| Étape                        | Détail |
|:------------------------------|:-------|
| 1. Créer un dépôt `cyber-ribouldingue-test-windows` sur GitHub |
| 2. Copier exactement la structure préparée |
| 3. Ajouter `.github/workflows/cmake-windows.yaml` |
| 4. Ajouter README.md spécifique Windows |
| 5. Commiter proprement |
| 6. Lancer GitHub Actions |

---

# 🧠 Notes

- La **première build** peut prendre 3-4 minutes (installation Qt Windows un peu plus lente que Linux).
- Tous tes tests (`CppTest`, `QtTests`, `QmlTests`) doivent passer pareil que sur Linux.
- Ton artefact sera un `.zip` téléchargeable qui contient `TestApp.exe`.

---

# 🚀 Après ce dépôt Windows :

✅ Linux OK  
✅ Windows OK  
🛤️ Ensuite on pourra enchaîner sur :
- macOS
- Android
- iOS
- WebAssembly

---

# 👉 Question rapide

Veux-tu que je te prépare aussi :
- **La Pull Request modèle pour Windows**
- **Le modèle de Release v0.1 pour Windows**
- **Un workflow pour ajouter automatiquement `windeployqt`** pour faire un `.zip` Windows complet (avec toutes les DLL Qt)

Dis-moi simplement :  
**"continue avec PR + release + windeployqt"** 🚀  
Et j’enchaîne directement pour toi !  
(Comme ça ton dépôt Windows sera super professionnel immédiatement.)
