class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        ans=[]
        for i in range(numRows):
            if i==0:
                ans.append([1])
            elif i==1:
                ans.append([1,1])
            else:
                #add up values of row from previous row and append them to new row.
                row=[1]
                for j in range(len(ans)-1):
                    row.append(ans[i-1][j]+ans[i-1][j+1])
                row.append(1)
                ans.append(row)
        return ans