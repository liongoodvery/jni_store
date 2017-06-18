package org.lion.ndstore;

public class Store {

    public native int getInteger(String pKey);

    public native void setInteger(String pKey, int pInt) ;

    public native String getString(String pKey);

    public native void setString(String pKey, String pString);
}
