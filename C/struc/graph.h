
typedef graphT *graphADT;
void initialize_graph(graphADT g, bool directed);
void read_graph(graphADT g, char *filename);
void insert_edge(graphADT g, int x, int y, int w);
void print_graph(graphADT g, char *name);
void free_graph(graphADT g);
graphADT copy_graph(graphADT g);
void delete_edge(graphADT g, int x, int y);
void eliminatelinks(graphADT g, int minW, int maxW);
void differentlinks(graphADT g1, graphADT g2);
void dfs_print(graphADT g, int x);
void isconnected(graphADT g);
void numofconncomp(graphADT g);
void print_complement(graphADT g, char *name);
void printdegree(graphADT g, char *name);
void commonlinks(graphADT g, graphT *h);
void differentlinks(graphADT g, graphT *h);