// https://stackoverflow.com/a/4501084/6154359
class Foo {
    private int data;

    Foo(int d) {
        this.data = d;
    }

    @Override
    public boolean equals(Object other) {
        if (other == null || other.getClass() != this.getClass()) {
            return false;
        }
        return ((Foo)other).data == this.data;
    }

    /* In a real class, you'd override `hashCode` here as well */

}

