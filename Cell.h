public:
void setPosition();
//sets the position of the cell
void fillCell();
//fills a cell
void emptyCell();
//empties a cell
int[] getPosition();
//returns the row and column array
int getRow;
//returns just the row
int getColumn;
//returns just the column
char getContent;
//returns what's inside the cell either X or -
private:
int position[2]
//a 1X2 array that shows the position RXC
char content;
//either a X or a -
