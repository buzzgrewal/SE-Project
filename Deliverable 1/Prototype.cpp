#include <iostream>
using namespace std;


class Customer
{
private:
    int customerID;
    string customerName;
    string customerAddress;
    string customerEmail;
    string customerPhone;
    string customerPassword;
    string customerUsername;
    string customerType;
    string customerStatus;
    struct PaymentDeatils
    {
        string paymentType;
        string paymentStatus;
        string paymentDate;
        string paymentAmount;
    };

    struct OrderDetails
    {
        string orderID;
        string orderDate;
        string orderStatus;
        string orderAmount;
        string orderItems;
    };

    struct ShippingDetails
    {
        string shippingID;
        string shippingDate;
        string shippingStatus;
        string shippingAddress;
        string shippingItems;
    };


public:
    Customer(/* args */);
    void setCustomerID(int id);
    void setCustomerName(string name);
    void setCustomerAddress(string address);
    void setCustomerEmail(string email);
    void setCustomerPhone(string phone);
    void setCustomerPassword(string password);
    void setCustomerUsername(string username);
    void setCustomerType(string type);
    void setCustomerStatus(string status);
    void setPaymentType(string type);
    void setPaymentStatus(string status);
    void setPaymentDate(string date);
    void setPaymentAmount(string amount);
    void setOrderID(string id);
    void setOrderDate(string date);
    void setOrderStatus(string status);
    void setOrderAmount(string amount);
    void setOrderItems(string items);
    void setShippingID(string id);
    void setShippingDate(string date);
    void setShippingStatus(string status);
    void setShippingAddress(string address);
    void setShippingItems(string items);

    int getCustomerID();
    string getCustomerName();
    string getCustomerAddress();
    string getCustomerEmail();
    string getCustomerPhone();
    string getCustomerPassword();
    string getCustomerUsername();
    string getCustomerType();
    string getCustomerStatus();
    string getPaymentType();
    string getPaymentStatus();
    string getPaymentDate();
    string getPaymentAmount();
    string getOrderID();
    string getOrderDate();
    string getOrderStatus();
    string getOrderAmount();
    string getOrderItems();
    string getShippingID();
    string getShippingDate();
    string getShippingStatus();
    string getShippingAddress();
    string getShippingItems();

    bool login(string username, string password);
    void logout();
    void registerCustomer();
    void updateCustomer();
    void deleteCustomer();
    void viewCustomer();
    void makePayment();
    void viewPayment();
    void viewOrder();
    void viewShipping();
    void viewProfile();
    void viewCart();
    void viewWishlist();
    void viewHistory();
    void viewNotification();
    void viewFeedback();
    void viewComplaint();
    void viewSupport();
    void viewHelp();
    void viewAbout();
    void viewContact();
    void viewTerms();
    void viewPrivacy();

    int addCart();
    int removeCart();
    int addWishlist();
    int removeWishlist();
    int addFeedback();
    int addComplaint();

    ~Customer();
};

class mobileApp
{
private:
    string appVersion;
    string platform;
    string appStatus;
    string appType;
    string appCategory;
    string appSize;
    string appRating;
    string appDownloads;
    string appReviews;
    string appDescription;
    bool notification;
public:
    mobileApp(/* args */);
    void setAppVersion(string version);
    void setPlatform(string platform);
    void setAppStatus(string status);
    void setAppType(string type);
    void setAppCategory(string category);
    void setAppSize(string size);
    void setAppRating(string rating);
    void setAppDownloads(string downloads);
    void setAppReviews(string reviews);
    void setAppDescription(string description);
    void setNotification(bool notification);

    string getAppVersion();
    string getPlatform();
    string getAppStatus();
    string getAppType();
    string getAppCategory();
    string getAppSize();
    string getAppRating();
    string getAppDownloads();
    string getAppReviews();
    string getAppDescription();
    bool getNotification();

    void viewApp();
    void downloadApp();
    void updateApp();
    void rateApp();
    void reviewApp();
    void searchApp();
    void shareApp();
    void viewNotification();
    void viewProfile();

    ~mobileApp();
};



class storeSystem
{
private:
    string systemStatus;
    string activeSession;
public:
    storeSystem(/* args */);
    void setSystemStatus(string status);
    void setActiveSession(string session);

    string getSystemStatus();
    string getActiveSession();

    bool isAvailable();
    void startSession();
    void endSession();
    
    ~storeSystem();
};



class shoppingSession
{
private:
    int sessionID;
    string sessionDate;
    string sessionStatus;
    string startTime;
    string endTime;
    double totalAmount;
public:
    shoppingSession(/* args */);
    void setSessionID(int id);
    void setSessionDate(string date);
    void setSessionStatus(string status);
    void setStartTime(string time);
    void setEndTime(string time);
    void setTotalAmount(double amount);

    int getSessionID();
    string getSessionDate();
    string getSessionStatus();
    string getStartTime();
    string getEndTime();
    double getTotalAmount();

    void startSession();
    void endSession();
    void viewSession();

    ~shoppingSession();
};


class productInteraction
{
private:
    int sessionID;
    string interactionType;
    string timeStamps;
public:
    productInteraction(/* args */);
    void setSessionID(int id);
    void setInteractionType(string type);
    void setTimeStamps(string time);

    int getSessionID();
    string getInteractionType();
    string getTimeStamps();

    void viewInteraction();
    void addInteraction();
    void removeInteraction();
    ~productInteraction();
};

class Security: public storeSystem
{
private:
    string securityStatus;
    string securityType;
    string securityLevel;
    string securityKey;
public:
    Security(/* args */);
    void setSecurityStatus(string status);
    void setSecurityType(string type);
    void setSecurityLevel(string level);
    void setSecurityKey(string key);

    string getSecurityStatus();
    string getSecurityType();
    string getSecurityLevel();
    string getSecurityKey();

    void viewSecurity();
    void updateSecurity();
    void addSecurity();
    void removeSecurity();

    ~Security();
};

class Admin: public Customer
{
private:
    string adminID;
    string adminName;
    string adminEmail;
    string adminPhone;
    string adminPassword;
    string adminUsername;
    string adminType;
    string adminStatus;

public:
    Admin(/* args */);
    void setAdminID(string id);
    void setAdminName(string name);
    void setAdminEmail(string email);
    void setAdminPhone(string phone);
    void setAdminPassword(string password);
    void setAdminUsername(string username);
    void setAdminType(string type);
    void setAdminStatus(string status);

    string getAdminID();
    string getAdminName();
    string getAdminEmail();
    string getAdminPhone();
    string getAdminPassword();
    string getAdminUsername();
    string getAdminType();
    string getAdminStatus();

    void login();
    void logout();
    void registerAdmin();
    void updateAdmin();
    void deleteAdmin();
    void viewAdmin();
    void viewCustomer();
    void viewApp();
    void viewSecurity();
    void viewProfile();
    void viewNotification();
    void viewFeedback();
    void viewComplaint();
    void viewSupport();
    void viewHelp();
    void viewAbout();
    void viewContact();
    void viewTerms();
    void viewPrivacy();

    ~Admin();
};

class Product
{
private:
    string productID;
    string productName;
    string productCategory;
    string productType;
    string productBrand;
    string productModel;
    string productDescription;
    string productPrice;
    string productDiscount;
    string productStatus;
    string productRating;
    string productReviews;
    string productDownloads;
    string productWarranty;
    string productColor;
    string productSize;
    string productWeight;
    string productQuantity;
    string productAvailability;
    string productCondition;
    string productDate;
    string productTime;
    string productImage;
    string productVideo;
    string productManual;
    string productSpecification;
    string productFeatures;
    string productSupport;
    string productHelp;
    string productAbout;
    string productContact;
    string productTerms;
    string productPrivacy;
    string productNotification;
    string productFeedback;
    string productComplaint;
    string productSupport;
    string productHelp;
    string productAbout;
    string productContact;
    string productTerms;
    string productPrivacy;
    string productNotification;
    string productFeedback;
    string productComplaint;
    string productSupport;
    string productHelp;
    string productAbout;
    string productContact;
    string productTerms;
    string productPrivacy;
    string productNotification;
    string productFeedback;
    string productComplaint;
    string productSupport;
    string productHelp;
    string productAbout;
    string productContact;
    string productTerms;
    string productPrivacy;
    string productNotification;
    string productFeedback;
    string productComplaint;
    string productSupport;
    string productHelp;
    string productAbout;
    string productContact;
    string productTerms;
    string productPrivacy;
    string productNotification;
    string productFeedback;
    string productComplaint;
    string productSupport;
    string productHelp;
    string productAbout;
    string productContact;
    string productTerms;
    string productPrivacy;
    string productNotification;
    string productFeedback;
    string productComplaint;
    string productSupport;
    string productHelp;
    string productAbout;
    string productContact;
    string productTerms;
    string productPrivacy;
    string productNotification;
    string productFeedback;
    string productComplaint;
    string productSupport;
    string productHelp;
    string productAbout;
    string productContact;
    string productTerms;
    string productPrivacy;
    string productNotification;
    string productFeedback;

public:
    Product(/* args */);
    void setProductID(string id);
    void setProductName(string name);
    void setProductCategory(string category);
    void setProductType(string type);
    void setProductBrand(string brand);
    void setProductModel(string model);
    void setProductDescription(string description);
    void setProductPrice(string price);
    void setProductDiscount(string discount);
    void setProductStatus(string status);
    void setProductRating(string rating);
    void setProductReviews(string reviews);
    void setProductDownloads(string downloads);
    void setProductWarranty(string warranty);
    void setProductColor(string color);
    void setProductSize(string size);
    void setProductWeight(string weight);
    void setProductQuantity(string quantity);
    void setProductAvailability(string availability);
    void setProductCondition(string condition);
    void setProductDate(string date);
    void setProductTime(string time);
    void setProductImage(string image);
    void setProductVideo(string video);
    void setProductManual(string manual);
    void setProductSpecification(string specification);
    void setProductFeatures(string features);
    void setProductSupport(string support);
    void setProductHelp(string help);
    void setProductAbout(string about);
    void setProductContact(string contact);
    void setProductTerms(string terms);
    void setProductPrivacy(string privacy);
    void setProductNotification(string notification);
    void setProductFeedback(string feedback);
    void setProductComplaint(string complaint);

    string getProductID();
    string getProductName();
    string getProductCategory();
    string getProductType();
    string getProductBrand();
    string getProductModel();
    string getProductDescription();
    string getProductPrice();
    string getProductDiscount();
    string getProductStatus();
    string getProductRating();
    string getProductReviews();
    string getProductDownloads();
    string getProductWarranty();
    string getProductColor();
    string getProductSize();
    string getProductWeight();
    string getProductQuantity();
    string getProductAvailability();
    string getProductCondition();
    string getProductDate();
    string getProductTime();
    string getProductImage();
    string getProductVideo();
    string getProductManual();
    string getProductSpecification();
    string getProductFeatures();
    string getProductSupport();
    string getProductHelp();
    string getProductAbout();
    string getProductContact();
    string getProductTerms();
    string getProductPrivacy();
    string getProductNotification();
    string getProductFeedback();
    string getProductComplaint();

    void viewProduct();
    void addProduct();
    void updateProduct();
    void deleteProduct();

    ~Product();

};

class Order: public Customer
{
private:
    string orderID;
    string orderDate;
    string orderStatus;
    string orderAmount;
    string orderItems;
public:
    Order(/* args */);
    void setOrderID(string id);
    void setOrderDate(string date);
    void setOrderStatus(string status);
    void setOrderAmount(string amount);
    void setOrderItems(string items);

    string getOrderID();
    string getOrderDate();
    string getOrderStatus();
    string getOrderAmount();
    string getOrderItems();

    void viewOrder();
    void addOrder();
    void updateOrder();
    void deleteOrder();
   

    ~Order();
};

class Shipping: public Customer
{
private:
    string shippingID;
    string shippingDate;
    string shippingStatus;
    string shippingAddress;
    string shippingItems;
public:
    Shipping(/* args */);
    void setShippingID(string id);
    void setShippingDate(string date);
    void setShippingStatus(string status);
    void setShippingAddress(string address);
    void setShippingItems(string items);

    string getShippingID();
    string getShippingDate();
    string getShippingStatus();
    string getShippingAddress();
    string getShippingItems();

    void viewShipping();
    void addShipping();
    void updateShipping();
    void deleteShipping();
   

    ~Shipping();
};

class Payment: public Customer
{
private:
    string paymentType;
    string paymentStatus;
    string paymentDate;
    string paymentAmount;
public:
    Payment(/* args */);
    void setPaymentType(string type);
    void setPaymentStatus(string status);
    void setPaymentDate(string date);
    void setPaymentAmount(string amount);

    string getPaymentType();
    string getPaymentStatus();
    string getPaymentDate();
    string getPaymentAmount();

    void viewPayment();
    void addPayment();
    void updatePayment();
    void deletePayment();
  

    ~Payment();
};

class Cart: public Customer
{
private:
    string cartID;
    string cartDate;
    string cartStatus;
    string cartItems;
public:
    Cart(/* args */);
    void setCartID(string id);
    void setCartDate(string date);
    void setCartStatus(string status);
    void setCartItems(string items);

    string getCartID();
    string getCartDate();
    string getCartStatus();
    string getCartItems();

    void viewCart();
    void addCart();
    void updateCart();
    void deleteCart();
  

    ~Cart();
};

class Wishlist: public Customer
{
private:
    string wishlistID;
    string wishlistDate;
    string wishlistStatus;
    string wishlistItems;
public:
    Wishlist(/* args */);
    void setWishlistID(string id);
    void setWishlistDate(string date);
    void setWishlistStatus(string status);
    void setWishlistItems(string items);

    string getWishlistID();
    string getWishlistDate();
    string getWishlistStatus();
    string getWishlistItems();

    void viewWishlist();
    void addWishlist();
    void updateWishlist();
    void deleteWishlist();


    ~Wishlist();
};

class History: public Customer
{
private:
    string historyID;
    string historyDate;
    string historyStatus;
    string historyItems;
public:
    History(/* args */);
    void setHistoryID(string id);
    void setHistoryDate(string date);
    void setHistoryStatus(string status);
    void setHistoryItems(string items);

    string getHistoryID();
    string getHistoryDate();
    string getHistoryStatus();
    string getHistoryItems();

    void viewHistory();
    void addHistory();
    void updateHistory();
    void deleteHistory();
  

    ~History();
};

class Notification: public Customer
{
private:
    string notificationID;
    string notificationDate;
    string notificationStatus;
    string notificationItems;
public:
    Notification(/* args */);
    void setNotificationID(string id);
    void setNotificationDate(string date);
    void setNotificationStatus(string status);
    void setNotificationItems(string items);

    string getNotificationID();
    string getNotificationDate();
    string getNotificationStatus();
    string getNotificationItems();

    void viewNotification();
    void addNotification();
    void updateNotification();
    void deleteNotification();
  

    ~Notification();
};

class Feedback: public Customer
{
private:
    string feedbackID;
    string feedbackDate;
    string feedbackStatus;
    string feedbackItems;
public:
    Feedback(/* args */);
    void setFeedbackID(string id);
    void setFeedbackDate(string date);
    void setFeedbackStatus(string status);
    void setFeedbackItems(string items);

    string getFeedbackID();
    string getFeedbackDate();
    string getFeedbackStatus();
    string getFeedbackItems();

    void viewFeedback();
    void addFeedback();
    void updateFeedback();
    void deleteFeedback();
  

    ~Feedback();
};

class Complaint: public Customer
{
private:
    string complaintID;
    string complaintDate;
    string complaintStatus;
    string complaintItems;
public:
    Complaint(/* args */);
    void setComplaintID(string id);
    void setComplaintDate(string date);
    void setComplaintStatus(string status);
    void setComplaintItems(string items);

    string getComplaintID();
    string getComplaintDate();
    string getComplaintStatus();
    string getComplaintItems();

    void viewComplaint();
    void addComplaint();
    void updateComplaint();
    void deleteComplaint();
   

    ~Complaint();
};


class Support
{
private:
    string supportID;
    string supportDate;
    string supportStatus;
    string supportItems;
public:
    Support(/* args */);
    void setSupportID(string id);
    void setSupportDate(string date);
    void setSupportStatus(string status);
    void setSupportItems(string items);

    string getSupportID();
    string getSupportDate();
    string getSupportStatus();
    string getSupportItems();

    void viewSupport();
    void addSupport();
    void updateSupport();
    void deleteSupport();
   

    ~Support();
};

class Help
{
private:
    string helpID;
    string helpDate;
    string helpStatus;
    string helpItems;
public:
    Help(/* args */);
    void setHelpID(string id);
    void setHelpDate(string date);
    void setHelpStatus(string status);
    void setHelpItems(string items);

    string getHelpID();
    string getHelpDate();
    string getHelpStatus();
    string getHelpItems();

    void viewHelp();
    void addHelp();
    void updateHelp();
    void deleteHelp();
   

    ~Help();
};

class About
{
private:
    string aboutID;
    string aboutDate;
    string aboutStatus;
    string aboutItems;
public:
    About(/* args */);
    void setAboutID(string id);
    void setAboutDate(string date);
    void setAboutStatus(string status);
    void setAboutItems(string items);

    string getAboutID();
    string getAboutDate();
    string getAboutStatus();
    string getAboutItems();

    void viewAbout();
    void addAbout();
    void updateAbout();
    void deleteAbout();
   

    ~About();
};

class productInteraction: public shoppingSession
{
private:
    int sessionID;
    string interactionType;
    string timeStamps;
public:
    productInteraction(/* args */);
    void setSessionID(int id);
    void setInteractionType(string type);
    void setTimeStamps(string time);

    int getSessionID();
    string getInteractionType();
    string getTimeStamps();

    void viewInteraction();
    void addInteraction();
    void removeInteraction();
    ~productInteraction();
};

class paymentInteraction: public shoppingSession
{
private:
    int sessionID;
    string interactionType;
    string timeStamps;
public:
    paymentInteraction(/* args */);
    void setSessionID(int id);
    void setInteractionType(string type);
    void setTimeStamps(string time);

    int getSessionID();
    string getInteractionType();
    string getTimeStamps();

    void viewInteraction();
    void addInteraction();
    void removeInteraction();
    ~paymentInteraction();
};

class Rating: public Customer
{
private:
    string ratingID;
    string ratingDate;
    string ratingStatus;
    string ratingItems;
public:
    Rating(/* args */);
    void setRatingID(string id);
    void setRatingDate(string date);
    void setRatingStatus(string status);
    void setRatingItems(string items);

    string getRatingID();
    string getRatingDate();
    string getRatingStatus();
    string getRatingItems();

    void viewRating();
    void addRating();
    void updateRating();
    void deleteRating();
   

    ~Rating();
};

class Review: public Customer
{
private:
    string reviewID;
    string reviewDate;
    string reviewStatus;
    string reviewItems;
public:
    Review(/* args */);
    void setReviewID(string id);
    void setReviewDate(string date);
    void setReviewStatus(string status);
    void setReviewItems(string items);

    string getReviewID();
    string getReviewDate();
    string getReviewStatus();
    string getReviewItems();

    void viewReview();
    void addReview();
    void updateReview();
    void deleteReview();
   

    ~Review();
};

