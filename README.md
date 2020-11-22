# Waste-Classification-using-Keras-and-CNN
Using Waste datasets to classify waste as Recyclable or Non-Recyclable(Organic) by using CNN and Keras

Jupyter Notebook - https://github.com/CrypticNumbers8/Waste-Classification-using-Keras-and-CNN/blob/master/Waste1.ipynb

1. DATA ACQUISITION:

  Kaggle Dataset(Sashaank Sekar): https://www.kaggle.com/techsash/waste-classification-data
  
2. MODEL TRAINING:

Model training (with early stopping of 5 epochs, if val_loss doesn't improve):
history = model.fit_generator(datagen.flow(x_train, y_train, batch_size= 20), epochs = 20, verbose=1,callbacks = callbacks,validation_data=(x_valid,y_validate))

3. OUTPUT:

Test Loss: 0.213
Test Accuracy: 0.927
