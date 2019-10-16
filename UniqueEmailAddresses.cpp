class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        if(emails.size()==0)
            return 0;
        map<string,int>hashUniqueEmailsLocalName;
        int count =0;
       for(string email: emails)
       {
           string localName = email.split("@");
           localName = localName.split("+").head();
           string [] localNamePossibilty = localName.split("\\.");
           if(localNamePossibilty.size()>0)
           string tempLocalName = localNamePossibilty[0];
           for(int i=0;i<localNamePossibilty.size();i++)
           {
               tempLocalName += localNamePossibilty[i];
               //tempLocalName does not already exist in the hash map
               if(hashUniqueEmailsLocalName.find(tempLocalName)!=hashUniqueEmailsLocalName.end()){
                   hashUniqueEmailsLocalName[tempLocalName]++;
                   count++;
               }
           }           
       }
        cout<<count<<endl;
        
    }
};
