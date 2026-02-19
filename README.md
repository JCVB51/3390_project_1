# CMPS 3390 – Project 1  
**Spring 2026**  
**Framework:** Qt (Qt Widgets)  
**Language:** C++  
**Platform:** Ubuntu Linux  
**IDE:** Qt Creator  

---

## 📌 Project Overview

This repository contains my submission for **CMPS 3390 – Project 1 (Spring 2026)**.

The objective of this project is to research, configure and develop at least one GUI-based application using a selected framework, while documenting the entire process from research to deployment.

As outlined in the official project specification (CMPS 3390 Project 1 – Spring 2026) the project consists of four major phases:

1. Research  
2. Environment Setup & Prototype  
3. Application Development  
4. Submission & Presentation  

This implementation uses **Qt Widgets with C++** on **Ubuntu Linux**, developed in **Qt Creator**.

---

## 🧠 Part 1 – Research

Before beginning development, extensive research was conducted to evaluate:

- Operating system compatibility  
- Framework and language familiarity  
- IDE tooling and Git integration  
- Free and trustworthy learning resources  
- Toolchain requirements  
- Pros & cons of available frameworks  

All research activity, including resources, takeaways and time spent has been logged in accordance with project requirements.

📄 Research documentation is located in: Documentation

---

## ⚙️ Part 2 – Environment Setup & Prototype

Following the research phase, the development environment was configured to support Qt-based GUI development.

### Environment Configuration

- **OS:** Ubuntu Linux  
- **Framework:** Qt (Qt Widgets)  
- **Language:** C++  
- **Build System:** CMake  
- **IDE:** Qt Creator  
- **Version Control:** Git  

All setup steps, installation procedures, configuration details and challenges encountered were documented as required in the lab.

A simple prototype application was created to validate:

- Compiler configuration  
- Qt runtime integration  
- UI designer functionality  
- Build and execution workflow  

---

## 💻 Part 3 – Application Development

In alignment with the lab requirements, the following frontend GUI applications were developed.

### ✅ App 1 – Hello

A basic multi-view Qt application demonstrating:

- A primary view with a **"Hello"** button  
- A secondary dialog displaying:
  - Label: **"Hello World"**
  - An **OK** button  
- Navigation back to the main window upon confirmation  

**Concepts Demonstrated:**

- Signals and Slots  
- QMainWindow  
- QDialog  
- UI design with `.ui` files  
- Event-driven programming  

---

### ✅ App 2 – Selected Option

This project includes an implementation of one of the following options specified in the lab:

#### Option 1 – Habit Tracker

- Table labeled **"Habit List"** with columns:
  - Habit  
  - Date  
- Text input field labeled **"Habit:"**
- **Add** button  
- Automatic detection of current date/time  
- Dynamic insertion into table  
- Input field cleared after submission  

**Stretch Goal (if implemented):**

- Data persistence using file storage  
- Automatic save/load functionality  

---

#### Option 2 – Indecision Machine

- Scrollable list labeled **"Choices"**  
- Text input field labeled **"Option:"**  
- Buttons:
  - Add  
  - Remove  
  - Decide  
- Random selection from list  
- Result displayed in dialog  

**Stretch Goal (if implemented):**

- Weighted probability selection  
- Separate data model class  

---

## 📁 Directory Breakdown

### `/Documentation`
Contains research logs and project documentation required for submission.

### `/src/project_1`
Contains the Qt source code for the application.

- `main.cpp` – Application entry point  
- `mainwindow.h` – Main window class declaration  
- `mainwindow.cpp` – Main window logic and signal/slot implementations  
- `mainwindow.ui` – Qt Designer UI layout file  
- `CMakeLists.txt` – Build configuration  
- `build/` – Auto-generated build artifacts  

