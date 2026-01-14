#include "stdio.h"

double linear_model(double weight, double bias, double x) {
    return weight * x + bias;
}

int main(int argc, char *argv[]) {
    double training_data_x[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
    double training_data_y[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };

    double weight = 0.0;
    double bias = 0.0;
    double learning_rate = 0.01;

    for (int epoch = 0; epoch < 10000; epoch++) {
        for (int i = 0; i < 10; i++) {
            double x = training_data_x[i] / 10.0;
            double y_true = training_data_y[i] / 10.0;
            double y_pred = weight * x + bias;
            double error = y_pred - y_true;

            // Adjust weights
            weight -= learning_rate * error * x;
            bias -= learning_rate * error;
        }

        // Print weight and bias every 1000 epochs
        if (epoch % 1000 == 0) {
            printf("Epoch %d: weight = %.4f, bias = %.4f\n", epoch, weight, bias);
        }
    }
    
    printf("Model test: input = %f, output = %f\n", 5.2, linear_model(weight, bias, 5.2 / 10.0) * 10.0);
}
