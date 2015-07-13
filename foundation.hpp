

struct Function {
};

struct Buffer {
	vector<Buffer> *dependents;
	bool needReeval;
};
struct Variable : Buffer {
};
struct Array : Buffer {
	bool isShaded;
};

union RootUnion {
	Variable v;
	Array    a;
	Function f;
};
enum RootType {
	variable,
	array,
	function,
	rootTypeCount
};
struct Root {
	vector<uint> text;
	uint         color;
	RootType     rootType;
	RootUnion    root;
};

vector<Root> roots;



cl_mem glyphSheet;
SDL_Surface *gss;
struct glyphSheetInfo {
	uint glyphW;
	uint glyphH;
	uint colCount;
	uint rowCount;
	uint unicodeFirst;
	uint unicodeLast;
};
glyphSheetInfo gsi;

struct textBlock {
	uint *text;
	uint w;
	uint h;
};
textBlock UItextBlock;



