#include <iostream>
#include <cstdint>
#include "../lib/argh/argh.h"
#include <chrono>
#include "../lib/kProcessor/include/colored_kDataFrame.hpp"
#include "../lib/parallel_hashmap/phmap.h"
#include <queue>


    void pairwise(string index_prefix, int user_threads, string cutoff_distance_type, double cutoff_threshold, string full_command, bool calculate_pvalue);
    void index_kmers(int kSize, string fasta_file, string names_file, int chunk_size, string index_prefix);
    void index_kmers_nonCanonical(int kSize, string fasta_file, string names_file, int chunk_size, string index_prefix);
    void index_skipmers(int m, int n, int k, string fasta_file, string names_file, int chunk_size, string index_prefix);
    void index_protein(int kSize, string fasta_file, string names_file, int chunk_size, string index_prefix);
    void index_dayhoff(int kSize, string fasta_file, string names_file, int chunk_size, string index_prefix);
    void index_datasets(string kfs_dir);
    void sourmash_sigs_indexing(string sigs_dir, int kSize);
    void bins_indexing(string bins_dir, int selective_kSize, string output_prefix, uint64_t kmers_reserve, uint64_t colors_reserve);
    void paired_end_to_kDataFrame(string r1_file_name, string r2_file_name, int kSize, int chunk_size, int downsampling_ratio, bool remove_singletones);
    void single_end_to_kDataFrame(string r1_file_name, int kSize, int chunk_size, int downsampling_ration, bool remove_singletones);
    void protein_to_kDataFrame(string r1_file_name, int kSize, int chunk_size, bool is_dayhoff, string output_prefix, int downsampling_ration = 1);
    void dbretina_indexing(string json_file, string user_index_prefix);