class CmpVals
{
public:
    virtual bool isCmp(a,b) = 0;
};

class LessCmpVals : public CmpVals
{
public:
    virtual bool isCmp(a,b){
        return a<b;
    }
};

class GrtCmpVals : public CmpVals
{
public:
    virtual bool isCmp(a,b){
        return a>b;
    }
};
class Set
{
public:
    Set(CmpVals* cmpFunc);
    void Insert(val){
        itr = begin();
        while(itr != end() && _cmpFunc->isCmp(val ,*itr)){
            push_back(val);
        }
    }
};

template <typename T>
class LessCmp
{
public:
    bool operator() (T a, T b){
        return a<b;
    }
};

template <typename T, typename CmpFunc>
class Set
{
public:
    void insert(T val){
        /// 
        if(_cmpFunc(val,itr))...;
    }
private:
    CmpFunc _cmpFunc;
};

Set<int, LessCmp> mySet;