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


## 🛠️ Build & Run (Linux)

### 1. Clone the repository

git clone https://github.com/Mudasir-Iqbal/OS_Project.git

cd OS_Project

### 2. Install dependencies (if needed)
sudo apt update
sudo apt install build-essential

### 3. Compile the project
make

### 4. Run the executable
./filelocker

### 🔧 Quick Start (One-liner)

```bash
git clone https://github.com/Mudasir-Iqbal/OS_Project.git && cd OS_Project/file_locker/ && make && ./filelocker

# You'll be prompted to:

Enter the file name

Choose to lock or unlock

The action will be performed using chmod

A log entry will be recorded in logs/log.txt

# 🧪 Example Actions
Lock a file: chmod 000

Unlock a file: chmod 644

 Log Example: [2025-05-03 17:20:00] Locked file: files/secret.txt

💡 Use Cases
Learn Linux file permissions

Create basic file access control tools

Teach OS concepts like chmod, fopen, and system-level logging

📄 License
MIT

🙋‍♂️ Author
Mudasir
GitHub: @Mudasir-Iqbal


---

Would you like me to save and upload this as `README.md` so you can directly copy or push it to GitHub?
