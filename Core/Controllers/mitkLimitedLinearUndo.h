#ifndef LIMITEDLINEARUNDO_H_HEADER_INCLUDED_C16E9C96
#define LIMITEDLINEARUNDO_H_HEADER_INCLUDED_C16E9C96

#include "mitkCommon.h"
#include "OperationEvent.h"
#include "UndoModel.h"
#include <vector>

namespace mitk {
//##ModelId=3E5F5D3F0075
class LimitedLinearUndo : public UndoModel
{
public:
    //##ModelId=3F0451950379
	typedef std::vector<OperationEvent*> UndoContainer;
    //##ModelId=3E5F5D8C00B2
    virtual bool SetOperationEvent(OperationEvent* operationEvent);

    //##ModelId=3E5F5D8C00C6
    //##Documentation
	//## @brief Undoes the last changes
	//##
    //##  reads the top element of the Undo-Stack,  
    //##  executes the operation,
    //##  swaps the OperationEvent-Undo with the Operation
    //##  and sets it to Redo-Stack
    virtual bool Undo();

    //##ModelId=3F0451960156
	//##Documentation
	//## @brief same like Undo() but with the possibility to fine or raw undo(Group or ObjectEventId)
	//## @params fine: if set to true, then all operations with the same ObjectId are undone
	//## if set to false, then all operations with the same GroupEventId are undone (see UndoController.h)
	virtual bool Undo(bool fine);

    //##ModelId=3E5F5D8C00DA
    //##Documentation
	//## @brief Undoes the last changes
	//##
    //## reads the top element of the Redo-Stack, 
    //## executes the operation,
    //## swaps the OperationEvent-Operation with the Undo-Operation
    //## and sets it to Undo-Stack
    virtual bool Redo();

    //##ModelId=3F0451960176
	//##Documentation
	//## @brief Undoes the last changes
	//##
    //## same as Redo(), but with the possibility to set to fine or raw
	virtual bool Redo(bool fine);

    //##ModelId=3F04519601A4
	//##Documentation
	//## @brief clears undo and Redolist
	virtual void Clear();
	
    //##ModelId=3F04519601B5
	//##Documentation
	//## @brief clears the RedoList
	virtual void ClearRedoList();
	
    //##ModelId=3F04519601D3
	//##Documentation
	//## @brief true if RedoList is empty
	virtual bool RedoListEmpty();

	//##Documentation
    //## @brief returns the ObjectEventId of the 
	//## top Element in the OperationHistory
    virtual int GetLastObjectEventIdInList();

	//##Documentation
    //## @brief returns the GroupEventId of the 
	//## top Element in the OperationHistory
    virtual int GetLastGroupEventIdInList();

protected:
    //##ModelId=3E5F5DF80360
    UndoContainer m_UndoList;

    //##ModelId=3E5F5E020332
	UndoContainer m_RedoList;

};
}//namespace mitk


#endif /* LIMITEDLINEARUNDO_H_HEADER_INCLUDED_C16E9C96 */
