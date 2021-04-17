class Cat {
    private String catName;
    private int catPower;

    Cat (String catName, int catPower) {
        this.catName = catName;
        this.catPower = catPower;
    }

    String getCatName() {
        return catName;
    }

    void setCatName(String catName) {
        this.catName = catName;
    }

    int getCatPower() {
        return catPower;
    }

    void setCatPower(int catPower) {
        this.catPower = catPower;
    }

    void strokeCat() {
        System.out.println("あなたは" + catName + "を撫でた！");
        catPower += 10;
    }

    void playCat() {
        System.out.println("あなたは" + catName + "と遊んだ！");
        catPower -= 10;
    }
}