
## 📄 **Software Requirements Specification (SRS)**  
### **Project Title:** Resume TUI Tracker  
### **Version:** 1.0  
### **Author:** Christopher Wachenko
### **Date:** 7/11/2025

---

## **1. Introduction**

### 1.1 Purpose  
The purpose of this document is to define the software requirements for the **Resume TUI Tracker**, a Terminal User Interface (TUI) application that helps job seekers manage and track their resume submissions, application statuses, interviews, and related notes within a terminal environment.

### 1.2 Scope  
The Resume TUI Tracker provides a lightweight, cross-platform solution for tracking job applications. It allows users to add, edit, delete, and view job applications, along with metadata like company, position, submission date, application status, interview date(s), follow-ups, and custom notes.

### 1.3 Definitions, Acronyms, and Abbreviations  
| Term | Definition |
|------|-------------|
| TUI | Terminal User Interface |
| CRUD | Create, Read, Update, Delete |
| CLI | Command-Line Interface |

### 1.4 References  
- [TUI Libraries: FTXUI ]
- [Platform: Linux/macOS/Windows]
- [Language: C++]

---

## **2. Overall Description**

### 2.1 Product Perspective  
This is a standalone, open-source TUI application. It will store data locally (e.g., using JSON, SQLite, or plain text) and provide a minimal, responsive, and intuitive interface for job tracking.

### 2.2 Product Functions  
- Manage job applications: Add, edit, delete, view.
- Categorize applications by status (e.g., Applied, Interviewing, Offer, Rejected).
- Record important dates: submission, interview, follow-up.
- Search/filter applications.
- Export data to CSV or JSON.
- Persistent local storage.
- Optional data backup.

### 2.3 User Classes and Characteristics  
- **Primary User:** Job seekers comfortable using a terminal.
- **Secondary User:** Recruiters or professionals managing multiple applications.

### 2.4 Operating Environment  
- Supported OS: Linux, macOS, Windows.
- Terminal emulator compatible.
- Local file system access for data persistence.

### 2.5 Design and Implementation Constraints  
- TUI framework dependency.
- Local storage format.
- Cross-platform support.

### 2.6 User Documentation  
- README with installation and usage instructions.
- Command reference or help menu.
- Example configuration and data files.

---

## **3. Specific Requirements**

### 3.1 Functional Requirements

| ID | Requirement | Priority |
|-----|-------------|----------|
| FR-1 | The system shall allow the user to add a new application with company, position, submission date, status, and notes. | High |
| FR-2 | The system shall allow the user to edit an existing application’s details. | High |
| FR-3 | The system shall allow the user to delete an existing application. | High |
| FR-4 | The system shall display all applications in a tabular TUI view. | High |
| FR-5 | The system shall allow filtering/sorting by status, date, or company. | Medium |
| FR-6 | The system shall save all data to local storage upon any CRUD operation. | High |
| FR-7 | The system shall provide a way to export data to CSV/JSON. | Medium |
| FR-8 | The system shall have keyboard shortcuts for navigation and actions. | High |
| FR-9 | The system shall display a help view with available commands. | High |
| FR-10| The system shall allow the download and upload of data to email account. | Medium |

---

### 3.2 Non-Functional Requirements

| ID | Requirement | Priority |
|-----|-------------|----------|
| NFR-1 | The system shall run on Linux, macOS, and Windows. | High |
| NFR-2 | The system shall be responsive and usable on various terminal sizes. | High |
| NFR-3 | The system shall store data securely in a user-readable format. | Medium |
| NFR-4 | The system shall not require internet connectivity to function. | High |

---

## **4. System Models**

### 4.1 Use Case Diagram (Textual)

- **Use Case:** Add Application
  - Actor: User
  - Description: User adds a new job application.
- **Use Case:** Edit Application
  - Actor: User
- **Use Case:** Delete Application
  - Actor: User
- **Use Case:** View Applications
  - Actor: User
- **Use Case:** Filter Applications
  - Actor: User
- **Use Case:** Export Data
  - Actor: User

---

## **5. Acceptance Criteria**

- ✅ User can add/edit/delete applications via keyboard shortcuts.
- ✅ Data persists between sessions.
- ✅ User can filter applications by status or company.
- ✅ User can export applications.
- ✅ Application runs without crashing on Linux, macOS, and Windows terminals.

---

## **6. Appendix**

- Example configuration file.
- Dependencies: e.g., C++ compiler, FTXUI, SQLite.
- Licensing (if open-source).
