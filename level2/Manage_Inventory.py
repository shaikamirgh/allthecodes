#tells how many items are in the inventory

if __name__ == '__main__':
    # Take the T (test_cases) input
    test_cases = int(input("no. of test cases: "))
    for case in range(test_cases):
        items={}
        ADD_op_items={}
        DEL_op_items={}
        ALL_op_items={}
        items_count=0
        n =int(input("how many items: "))
        for i in range(n):
            item_name, item_qty_str = map(str,input("Enter component name and its quantity: ").split())
            item_qty=int(item_qty_str)
            items[item_name]=item_qty
            items_count=items_count+item_qty
        #print(items)
        
        m = int(input("how many operations to perform: "))
        for j in range(m):
            operation,op_item_name,op_item_qty_str = map(str,input().split())
            op_item_qty=int(op_item_qty_str)
            ALL_op_items[op_item_name]=op_item_qty
            if operation=="ADD":
                ADD_op_items[op_item_name]=op_item_qty
                
                items_count=items_count+op_item_qty
                
                if op_item_name not in items:
                    print("ADDED Item",op_item_name)
                else:
                    print("UPDATED Item",op_item_name)
            else:
                DEL_op_items[op_item_name]=op_item_qty
                
                if op_item_name not in items:
                    print("Item",op_item_name,"does not exist")
                else:
                    if op_item_qty>items[op_item_name]:
                        print("Item",op_item_name,"could not be DELETED")
                    else:
                        print("DELETED Item",op_item_name)
                        items_count=items_count-op_item_qty
        #print(ADD_op_items)
        #print(DEL_op_items)
        print("Total Items in Inventory:",items_count)
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    '''   
        for k in range(len(ALL_op_items)):
            z=ALL_op_items[k]
            if z in ADD_op_items:
                items_count=items_count+ADD_op_items[z]
                if z not in items:
                    print("ADDED Item",z)
                else:
                    print("UPDATED Item",z)
                
            if z in DEL_op_items:
                if z not in items:
                    print("Item",z,"does not exist")
                else:
                    if DEL_op_items[z]>items[z]:
                        print("Item",z,"could not be DELETED")
                    else:
                        print("DELETED Item",z)
                        items_count=items_count-DEL_op_items[z]
    '''
