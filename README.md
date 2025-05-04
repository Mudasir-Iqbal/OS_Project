# OS File Locker & Logger 🔐📝

A lightweight C project to lock/unlock files using Linux file permissions (`chmod`) and log every action to a local file. Designed for learning OS-level file control, system programming, and `Makefile` compilation — all without using any external libraries.

## 🚀 Features
- 🔐 Lock and unlock any file using chmod
- 📝 Log every lock/unlock action with timestamps
- 📁 Organized directory structure (files, logs)
- 🧰 Fully built using Makefile
- 🧱 Pure C project – no external libraries used

## 📂 Directory Structure
file_locker/

├── files/ # Test files for locking/unlocking

├── logs/ # Access logs go here

├── locker.c/h # File locking logic

├── logger.c/h # Logging logic

├── main.c # Main menu / program flow

├── Makefile # For building the project


## 🛠️ Build and Run
make
# Compile everything
./filelocker


🧪 Example Actions
Lock a file: chmod 000

Unlock a file: chmod 644

Log example: [2025-05-03 17:20:00] Locked file: files/secret.txt

💡 Use Cases
Learn file permissions

Create basic security tools

Teach OS concepts like chmod, fopen, and system logging

📄 License
MIT


🙋‍♂️ Author
Mudasir


---

Would you like me to generate the full `README.md` file and prepare `.gitignore` or GitHub Actions for CI too?
