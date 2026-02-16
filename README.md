# M.E.D.I.C 
## Medical Evaluation Demo In C
🩺 M.E.D.I.C is a small educational project that explores how basic C programming concepts can be applied to simplified medical parameters analysis.
The code uses structured inputs and, utilizations of if-else conditions to give the outcome of a given data.

This project analyzes multiple blood marker values using age-based and gender-based reference ranges inspired by real clinical thresholds. 
It demonstrates how structured logic and conditional branching in C can simulate simplified diagnostic reasoning for only educational purposes.

#### ⚠️ This is an educational demo. It is not intended for real medical use.

## 🧬 Modules
### 1. Hemoglobin analysis
#### What it is:
Hemoglobin is the protein in red blood cells that carries oxygen from the lungs to the rest of the body.

#### Module Functionality: 
- Accepts age, gender and, hemoglobin (g/dL) values
- Classifies results as Low, Normal, or High
- Applies infant, child, adult, and elderly ranges
- Grades anemia severity (mild, moderate, severe)

### 2. White Blood Cells (WBC)
#### What it is:
The immune system cells produced in the bone marrow that protect the body against infections, viruses, and bacteria. 

#### Module Functionality:
- Classifies WBC count
- Flags possible infection patterns (low, high)
- Applies pediatric and adult reference ranges

### 3. Red Blood Cells (RBC)
#### What it is: 
Red blood cells carry oxygen throughout the body using hemoglobin.

#### Module Functionality:
- Classifies RBC count
- Applies age and gender variation
- Gives simplified hematological comparison

### 4. Platelets
#### What it is:
Platelets are small blood components that are critical for blood clotting and wound healing.

#### Module Functionality:
- Evaluates platelet count
- Identifies bleeding risk (low count)
- Identifies clotting risk (high count)



## ▶️ Compilation & Execution

##### Compile:
```gcc fileName.c -o test```

##### Run:
```.\test```

## 🧠 Educational Purpose
This project represents how algorithmic logic can simulate simplified clinical and medical classifications using structured C langugage code.
