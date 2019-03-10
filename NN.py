import numpy as np
np.random.seed(100)

def sigmoid(t):
    return 1 / (1 + np.exp(-t))

def sigmoid_derivative(p):
    return p * (1 - p)

class NeuralNetwork:


    def _init_(self,x, y ,numLayers=2,numNodes=2,eta=0.001,maxIter=10000):
        x = np.array(x)
        y = np.array(y)
        
        self.weights = [np.random.rand(x.shape[1], numNodes)] #create the weights from the inputs to the first laye        
        for i in range(numLayers-1):
            self.weights.append(np.random.rand(numNodes,numNodes)) #create the random weights between internal layers
        self.weights.append(np.random.rand(numNodes,1)) #create weights from final layer to output node
        
        self.outputs = np.zeros(y.shape)
        self.train(learningRate=eta,maxIterations=maxIter)
        self.z = list(size = len(self.weights))
    def train(self,learningRate,maxIterations):
        return 0.0

    def predict(self,x=[]):
        x = np.array(x)
        return 0.0

    def feedforward(self):
        self.z[0] = sigmoid(np.dot(self.x, w[0]))
        i = 1
        for w in self.weights[1:]:
            self.z[i] = sigmoid(np.dot(z[i-1],w))
            i = i + 1
        return z[-1]
            
        return 0.0

    def backprop(self):
        return 0.0

NN = NeuralNetwork([[1,3],[5,1],[10,2]])
