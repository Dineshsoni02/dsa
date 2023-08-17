 vector<int> res;
        int count=0;
        int total = row*col;
        //index initilization
        int startingRow = 0; 
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        while(count<total){
            //printing starting row
            for(int i = startingCol;count<total && i<=endingCol;i++){
                res.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            //printing ending col
            for(int i = startingRow;count<total && i<=endingRow;i++){
                res.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            //printing ending row
            for(int i = endingCol;count<total && i>=startingCol;i--){
                res.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            //printing starting col
            for(int i = endingRow;count<total && i>=startingRow;i--){
                res.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }


        return res;