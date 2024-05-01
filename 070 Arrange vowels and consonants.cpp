//TC  : O(N)
//SC  : O(1)

class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    struct Node* arrangeCV(Node* head) {
        Node* vowels = new Node(-1);
        Node* vowel = vowels;
        Node* consonants = new Node(-1);
        Node* consonant = consonants;
        Node* temp = head;
        while(temp){
            char t = temp->data;
            if(t == 'a' || t == 'e' || t =='i' || t == 'o' || t=='u'){
                vowel->next = temp;
                vowel = vowel->next;
            }
            else{
                consonant->next = temp;
                consonant = consonant->next;
                
            }
            temp = temp->next;
        }
        consonant->next = nullptr;
        if(vowels->next && !consonants->next) return vowels->next;
        if(!vowels->next && consonants->next) return consonants->next;
        vowel->next = consonants->next;
        return vowels->next;
    }
};
