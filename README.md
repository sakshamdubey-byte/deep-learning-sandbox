# 🚀 Deep Learning Journey: PyTorch & Keras Projects

Welcome to my deep learning repository! This project tracks my progress from mastering core tensor operations to building and optimizing real-world diagnostics and predictive models across multiple frameworks.

---

## 📂 Repository Structure

| Topic | File / Folder | Description |
| :--- | :--- | :--- |
| 🔢 **01. Tensors** | `01_tensors/` | Core tensor operations, initialization, manipulation, and CPU vs. GPU acceleration in PyTorch. |
| 🧮 **02. Autograd** | `Autograd_pytorch.py` | Understanding PyTorch's automatic differentiation engine, tracking gradients, and backward passes. |
| 🎗️ **03. Diagnostics** | `breast_cancer_detection/` | Implementing and scaling breast cancer detection models from baseline networks to advanced architectures in PyTorch. |
| 🏦 **04. Churn Prediction** | `ann.py` | Building an Artificial Neural Network (ANN) in Keras/TensorFlow to predict bank customer retention. |
| ⚙️ **05. Tuning** | `hyperparameter_tuning.ipynb` | Systematically tuning structural parameters and optimizers to maximize Keras model performance. |
| 🐱 **06. Augmentation** | `single_cat_dog_prediction.ipynb` | Single-image data augmentation pipeline using PyTorch transforms to expand limited image sets. |
| 🧠 ** 07. Embeddings ** | `word_embedding_using_embedding_layer_in_keras/` | Implementing and training custom word embeddings using Keras's Embedding Layer for NLP tasks. |
| 📰 *08. Fake News* | FakeNewsClassifierUsingLSTM.ipynb | Building a sequential NLP pipeline using Long Short-Term Memory (LSTM) networks to classify fake vs. real news articles. |
| 🔤 *09. NLP Pipeline* | basic_nlp_pipeline.ipynb | Implementing a foundational Natural Language Processing (NLP) pipeline covering text preprocessing, tokenization, and baseline text classification. |
10. **Advanced Tokenization (Basic vs. spaCy)**
    * **Description:** Breaks down raw text paragraphs into individual words or clean sentences. It compares the limitations of standard Python `.split()` methods (which leave punctuation attached or miss sentence boundaries) against robust, industry-standard NLP pipelines like `spaCy` to intelligently handle complex edge cases like abbreviations (`Ph.D`), emails, and currencies.

    
## 🔬 Feature Project 1: Breast Cancer Detection Pipeline (PyTorch)

This module focuses on evaluating and scaling machine learning models for automated breast cancer detection, transitioning from a basic baseline to state-of-the-art medical imaging architectures.

### Phase 1: The Baseline (Current)
* **Architecture:** Single Multi-Layer Neural Network.
* **Objective:** Establish a core end-to-end pipeline (data loading, preprocessing, training loop, and evaluation).

### Phase 2: Advanced Computer Vision Upgrades (In Progress)
To reduce false negatives and capture subtle tissue patterns, the pipeline is being upgraded with the following architectures:
* **Transfer Learning via DenseNet-121 / ResNet-50:** Leveraging ImageNet pre-trained weights to preserve detailed feature maps.
* **Vision Transformers (ViTs):** Capturing global context across high-resolution mammogram and ultrasound scans.
* **U-Net Segmentation:** Moving beyond binary classification to actively segment and highlight regions of interest (tumors).

### Phase 3: Tabular & Ensemble Integration
* **Hybrid Models:** Extracting deep spatial features using CNNs and passing them into optimized **XGBoost/LightGBM** classifiers.
* **Model Ensembling:** Combining predictions from multiple architectures to maximize the pipeline's overall $F_1$-score and clinical reliability.

---

## 🏦 Feature Project 2: Bank Customer Churn Prediction (Keras & TensorFlow)

This module implements a fully connected Artificial Neural Network (ANN) pipeline to solve a binary classification problem: predicting whether a bank customer is likely to leave (**exit**) or stay.

### Pipeline Breakdown
* **Data Preprocessing:** Performs categorical encoding on geographical and gender data (`pd.get_dummies`), handles data splitting (80/20 train-test ratio), and applies feature scaling (`StandardScaler`) to optimize gradient descent.
* **Architecture:** A Sequential neural network mapping **11 input features** into **two hidden layers (6 neurons each)** using `He Uniform` initialization and `ReLU` activation, leading to a single-neuron `Sigmoid` output layer.
* **Training & Metrics:** Compiled with the `Adamax` optimizer and trained over **100 epochs** (batch size 10) with a 33% live validation split. The script automatically plots accuracy and loss convergence curves across training epochs.

---

## ⚙️ Feature Project 3: Hyperparameter Optimization Pipeline

A dedicated experimentation suite (`hyperparameter_tuning.ipynb`) designed to systematically evaluate and optimize the neural network configurations used in the churn prediction classifier.

### Tuning Overview
* **Search Strategy:** Configured for evaluating network topology structural changes, optimal batch limits, and training epoch caps.
* **Algorithmic Benchmarking:** Evaluates convergence efficiency across alternative optimization algorithms (e.g., Adam vs. Adamax) to maximize test-set precision, control overfitting, and minimize validation loss.

---

## 🔬 Feature Project 4: Single-Image Data Augmentation for Cat and Dog Images

A computer vision experimentation pipeline designed to apply robust data augmentation techniques on individual images to expand small datasets and improve model generalization.

### Pipeline Breakdown
* **Targeted Augmentation:** Processes single cat or dog images through a series of geometric and photometric transformations (e.g., rotation, scaling, flipping, brightness adjustments).
* **Framework Integration:** Built using PyTorch (`torchvision.transforms`) to dynamically generate varied training samples on the fly.
* **Objective:** Prevent overfitting in binary classification models by simulating diverse environmental conditions from a limited set of source images.

---

## 🛠️ Getting Started

### Prerequisites
Make sure you have Python installed on your system. You can install all the required dependencies for both the PyTorch and Keras projects by running:

```bash
pip install torch torchvision xgboost scikit-learn tensorflow keras pandas matplotlib numpy notebook
