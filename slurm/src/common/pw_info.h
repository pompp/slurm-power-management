#ifndef _PWINFO_H
#define _PWINFO_H

#define job_pw_info_folder "/tmp/slurm/job_pw_info"
const int MAX_JOB = 1000; // max of job on the queue;
struct job_pw_info
{
   char   job_comment[255];
   int    job_id;
   double pkg_pw;
   double dram_pw;
};
const int    NNODE = 4;
const int core_per_socket = 8;
const int socket_per_node = 2;

double pw_budget = 800; // PKG power budget. 100W per PKG, 4 nodes x 2 Socket = 8 Sockets = 800W
double pw_remain = 800;
#endif