pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
           sh  'make build'
            }
        }
        stage('Test') {
            steps {
             sh 'make test'
            }
        }
        stage('Delivery') {
            steps {
              sh 'docker build -t dockerCALC . '
            }
        stage('Deploy') {
            steps {
              sh 'make deploy'
              sh 'docker run -p  dockerCALC 5000 '  
            }
        }
    }
}


