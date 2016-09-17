public:
GameBoard();
~GameBoard();

bool isNeighbor(Cell,Cell);
bool isEdge(Cell);
bool isCorner(Cell);
bool isEmpty(Cell);
bool isFull(Cell);
bool countNeighbors(Cell);
bool setMode();
int cornerCount();
int edgeCount();
int getRows();
int getColumns();
void setRows();
void setColumns();
private:
int rows;
int columns;
int board[rows][columns];
