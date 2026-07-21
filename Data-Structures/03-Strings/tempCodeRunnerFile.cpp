    string ans = "";
    for( int i = 0 ; i < strs[0].length() ; i++)
    {
        char ch = strs[0][i];
        bool flag = true;
        for(int j = 1 ; j<strs.size() ; j++)
        {
            if(strs[j][i]!=ch)
            {
                flag = false;
                break;
            }
        }
        if(flag==false)
        {
            break;
        }
        else
        {
            ans+=ch;
        }
    }
    return ans;