#ifndef MESH_H
#define MESH_H
typedef struct {
  int n, m, nz, lennz;
  int *I, *J;
  double *val;
} matrix_s;

typedef struct {
  int nverts, ntris, P;
  double *x, *y; //x and y coords
  int *b; //boundary
  int *t; //tris coords, len = ntris*3
  int *d; //distribution
  matrix_s *hypergraph;
} mesh_s;


#endif