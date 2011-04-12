
#import <UIKit/UIKit.h>
#import "DropboxSDK.h"

@interface FrotzDBController : UITableViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    UITableView	*m_tableView;
    UILabel	*m_headerLabel, *m_folderLabel;
    
    DBLoginController* m_dbLoginController;

    UITextField *m_textField;
    
    id m_delegate;
    BOOL m_hasAppeared;
    BOOL m_isUnlinking;
}

- (id)init;
- (void)donePressed;
- (id)delegate;
- (void)setDelegate:(id)delegate;
@end

