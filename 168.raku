my atomicint $counter = 0;

sub f() {
    $counter⚛++ for ^100_000;
}

my $t0 = now;

await do {
    start {f}
    start {f}
}

say now - $t0;

say $counter;
