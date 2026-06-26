public class Solution {
    public bool IsValidSudoku(char[][] matrix) {
       
    HashSet<char>[]rows = new HashSet<char> [9]; 
    HashSet<char>[]cols = new HashSet<char> [9]; 
    HashSet<char>[]boxes = new HashSet<char> [9];
    for (global::System.Int32 i = 0; i < 9; i++)
    {
        rows[i] = new HashSet<char>();
        cols[i]=new HashSet<char>();
        boxes[i]=new HashSet<char>();
    }

    for (global::System.Int32 i = 0; i < rows.Length; i++)
    {
        for (global::System.Int32 j = 0; j < cols.Length; j++)
        {
            if (matrix[i][j] == '.') continue;

            if (rows[i].Contains(matrix[i][j]))
                return false;

            rows[i].Add(matrix[i][j]);

            if (cols[j].Contains(matrix[i][j]))
                return false;

            cols[j].Add(matrix[i][j]);

            int idx = (i / 3) * 3 + (j / 3);
            if (boxes[idx].Contains(matrix[i][j]))
                return false;

            boxes[idx].Add(matrix[i][j]);
        }
    }


    return true; 
    }
}
