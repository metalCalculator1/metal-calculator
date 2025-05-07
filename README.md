# Metal Calculator

## Overview

Metal Calculator is a Windows desktop application for metallurgical calculations and alloy management. It provides a convenient interface for metallurgists and engineers to calculate alloy compositions, store reference metal data, and perform various metallurgical calculations.

## Table of Contents

- [Features](#features)
- [Project Structure](#project-structure)
- [Technologies](#technologies)
- [Setup and Installation](#setup-and-installation)
- [Usage](#usage)
- [Database Configuration](#database-configuration)
- [Models](#models)
- [Utility Classes](#utility-classes)
- [Contributing](#contributing)

## Features

- **Metal Database Management**: Store and retrieve metal specifications
- **CRUD Operations**: Create, read, update, and delete metal records
- **Composition Calculation**: Calculate and verify alloy compositions
- **UTF-8 Support**: Proper handling of international character sets

## Project Structure

The project follows a modular architecture separated into several key components:

```
MetalCalculator/
├── models/             # Data models 
├── sql/                # Database operations
│   └── headers/        # SQL header files
├── subforms/           # Dialog forms for various operations
├── support/            # Utility and helper classes
└── utilities/          # Additional utility functions
```

### Key Components

- **Main Form**: Main application interface
- **Metal Model**: Data structures for metals and settings
- **Database Layer**: PostgreSQL database operations
- **Subforms**: Dialog forms for metal CRUD operations
- **Utilities**: String conversion and other helper functions

## Technologies

- **C++/CLI**: Core application logic
- **Windows Forms**: User interface
- **PostgreSQL**: Database backend
- **libpq**: PostgreSQL C client library

## Setup and Installation

### Prerequisites

- Visual Studio (2019 or later recommended)
- .NET Framework 4.8
- PostgreSQL database server
- C++ development tools

### Build Steps

1. Clone the repository
2. Open `MetalCalculator.sln` in Visual Studio
3. Restore NuGet packages
4. Create a `.env` file in the project root (see [Database Configuration](#database-configuration))
5. Build the solution (Build → Build Solution)
6. Run the application (Debug → Start Debugging)

## Usage

### Managing Metals

The application provides several operations for managing metal records:

1. **Creating a new metal**:
   - Navigate to the Create Metal form
   - Enter metal properties (name, composition values, metal type)
   - Click "Add" to save the record

2. **Selecting a metal**:
   - Click "Select Metal" from the main form
   - Browse the list of available metals
   - Double-click on a metal to select it

3. **Updating a metal**:
   - Navigate to the Update Metal form
   - Select the metal to update
   - Modify the properties as needed
   - Click "Save" to update the record

4. **Deleting a metal**:
   - Navigate to the Delete Metal form
   - Select the metal to delete
   - Confirm the deletion

### Performing Calculations

The application can perform metallurgical calculations based on the stored metal data and user inputs. Specific calculation features will depend on the implementation in the `Calculator` class.

## Database Configuration

The application uses a PostgreSQL database to store metal records. Database connection parameters are stored in a `.env` file in the project root.

### Creating the .env File

Create a `.env` file with the following parameters:

```
host=your_database_host
dbname=your_database_name
user=your_database_user
password=your_database_password
sslmode=prefer
```

### Database Schema

The database should have at least the following tables:

#### Metals Table

```sql
CREATE TABLE metals (
    id SERIAL PRIMARY KEY,
    name VARCHAR(255) NOT NULL UNIQUE,
    c FLOAT NOT NULL,
    si FLOAT NOT NULL,
    mn FLOAT NOT NULL,
    p FLOAT NOT NULL,
    s FLOAT NOT NULL,
    cu FLOAT NOT NULL,
    cr FLOAT NOT NULL,
    ni FLOAT NOT NULL,
    metal_type VARCHAR(50) NOT NULL
);
```

#### Settings Table

```sql
CREATE TABLE settings (
    id SERIAL PRIMARY KEY,
    fmn_78_0 SMALLINT NOT NULL,
    fmn_78_1 SMALLINT NOT NULL,
    fs_45 SMALLINT NOT NULL,
    mn_95 SMALLINT NOT NULL,
    carbon SMALLINT NOT NULL,
    mn_fmn78 SMALLINT NOT NULL,
    mn_mn95 SMALLINT NOT NULL,
    si_fs45 SMALLINT NOT NULL,
    c_carbon SMALLINT NOT NULL
);
```

## Models

### MetalModel

Represents a metal with its chemical composition and type. Properties include:

- `id`: Unique identifier
- `name`: Metal name
- `c`, `si`, `mn`, `p`, `s`, `cu`, `cr`, `ni`: Chemical element percentages
- `metalType`: Type of metal (enum)

### SettingsModel

Stores application settings, primarily coefficients for various calculations:

- `fmn_78_0`, `fmn_78_1`: FeMn78 coefficients
- `fs_45`: FeSi45 coefficient
- `mn_95`: Mn95 coefficient
- `carbon`: Carbon coefficient
- `mn_fmn78`: Mn in FeMn78 coefficient
- `mn_mn95`: Mn in Mn95 coefficient
- `si_fs45`: Si in FeSi45 coefficient
- `c_carbon`: C in carbon coefficient

## Utility Classes

### StringConverter

Provides utilities for string conversions between different formats and encodings:

- `SystemStringToStdString`: Convert .NET string to C++ string
- `StdStringToSystemString`: Convert C++ string to .NET string
- `ConvertStringToUtf8`: Convert to UTF-8 encoding
- `convertToAnsi`: Convert UTF-8 to ANSI encoding

### CredHandler

Handles reading and parsing database credentials from the `.env` file.

### MetalManager

Provides a static interface for accessing the currently selected metal across different forms.

## Contributing

Guidelines for contributing to the project:

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Run tests and ensure code quality
5. Submit a pull request

---

© 2025 Metal Calculator. All Rights Reserved.
