template < typename dataType >
class SP
{
    private:
    dataType* pData; 
    int count;//reference count
    public:

    SP(dataType* pValue) : pData(pValue)
    {
    }
    ~SP()
    {
        delete pData;
    }

    dataType& operator* ()
    {
        return *pData;
    }

    dataType* operator-> ()
    {
        return pData;
    }
    void AddRef()
    {
        // Increment the reference count
        count++;
    }
    int Release()
    {
        // Decrement the reference count and
        // return the reference count.
        return --count;

};
