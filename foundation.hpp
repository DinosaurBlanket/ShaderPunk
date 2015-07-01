

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
	string    text;
	uint32_t  color;
	RootType  rootType;
	RootUnion root;
};

vector<Root> roots;



struct GlyphSheet {
	uint32_t glyphW;
	uint32_t glyphH;
	uint32_t unicodeBegin;
	uint32_t unicodeRange;
	GLuint   texture;
};
GlyphSheet activeGlyphSheet;




enum labelVertAttribs {
	lva_x, 
	lva_y, 
	lva_z, 
	lva_glyphX, 
	lva_glyphY, 
	lva_wordX, 
	lva_glyphIndex, 
	lva_objIndex,
	labelVertAttribCount
};
enum UIlayers {
	uil_rootLabels,
	UIlayerCount
};

