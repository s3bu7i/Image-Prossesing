## Real-Time Traffic Sign Detection and Classification
This project demonstrates real-time traffic sign detection and classification using a trained deep learning model. It utilizes computer vision techniques and machine learning to identify traffic signs from a video feed captured by a webcam.

## Features
· Real-time traffic sign detection and classification using OpenCV and TensorFlow.
· Pre-trained model for traffic sign classification.
· Displays the detected signs and their corresponding labels in real-time.

## Requirements
· Python 3.6 or above
· OpenCV (cv2)
· NumPy
· TensorFlow (2.0 or above)
· Keras


## Installation
1. Clone the repository:
    `git clone https://github.com/your-username/traffic-sign-detection.gitcd traffic-sign-detection`

2. Install the required dependencies:
    `pip install -r requirements.txt`

3. Download the trained model:
    The code assumes that you have a trained model `(TSModel5)` available in the specified `03-Classification/Models` directory. If you have your own trained model, replace the model file in the same directory. If you don't have a trained model, you can train one using your own dataset or use a pre-trained model from sources like TensorFlow Hub.

## Usage
1. Run the script:
    `python TSMain.py`

2. The webcam feed will open, and the program will start detecting and classifying traffic signs in real-time.
3. Detected signs will be displayed in a bounding box, and their corresponding labels will be printed in the console.
3. Press the 'q' key to exit the program.

## Notes
· Make sure your webcam is properly connected and configured.
· The model path and name may need to be adjusted in the code `(modelPath)` according to your setup.
· The program assumes that traffic signs will be captured by the webcam and displayed clearly without any obstructions.
· The code is written as a demonstration and may require further optimization for different environments or specific use cases.


## Acknowledgments
· The project uses the `OpenCV` library for computer vision tasks.
· The machine learning model is built using `TensorFlow` and Keras.
· The training data for the model is not included in this repository. It's assumed that a trained model is available in the specified path.
