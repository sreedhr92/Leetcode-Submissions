class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();
        vector<vector<char>> temp;
        cout<<endl<<endl;
        vector<vector<char>> output(n,vector<char>(m));
        for(auto row:box)
        {
            int in=0;
            int prev=0;
            a:
            int end = -1;
            int stone=0;
            int space =0;
            for(;in<row.size();in++)
            {
                if(row[in]=='*')
                {
                    in++;
                    end=in;
                    break;
                }
                if(row[in]=='.')
                    space++;
                if(row[in]=='#')
                    stone++;
            }
            end = end == -1 ? row.size():end;
            int i=prev;
            while(i<end && space ){
                row[i]='.';
                space--;
                i++;
            }
            while(i<end && stone){
                row[i]='#';
                stone--;
                i++;
            }
            prev = in;
            if(in<row.size()-1)
                goto a;
            temp.push_back(row);
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                output[j][i]=temp[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m/2;j++)
            {
                swap(output[i][j],output[i][m-j-1]);
            }
        }
        return output;
    }
};
