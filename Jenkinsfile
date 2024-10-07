pipeline {
    agent any

    stages {
        stage('checkout') {
            steps {
                catchError(buildResult: 'UnSTABLE', stageResult: 'FAILURE') {
                   sh 'echo "checkout stage"; sleep 5'
                }
            }
        }
        stage('build') {
            steps {
                catchError(buildResult: 'UnSTABLE', stageResult: 'FAILURE') {
                    sh 'echo "build stage"; sleep5'
                    // correct sleep command                  
                }
            }
        }
        stage('test') {
            steps {
                catchError(buildResult: 'UnSTABLE', stageResult: 'FAILURE') {
                   sh 'echo "test stage"; sleep 5'
                }
            }
        }
        stage('deploy') {
            steps {
                catchError(buildResult: 'UnSTABLE', stageResult: 'FAILURE') {
                   sh 'echo "deploy stage"; sleep 5'
                }
            }
        }
    }
}
