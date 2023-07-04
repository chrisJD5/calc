pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
              make run
            }
        }
        stage('Test') {
            steps {
              make test
            }
        }
        stage('Deploy') {
            steps {
                make deploy
            }
        }
    }
}


