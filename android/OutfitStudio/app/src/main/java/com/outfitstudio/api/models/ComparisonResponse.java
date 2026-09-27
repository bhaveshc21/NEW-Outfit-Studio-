package com.outfitstudio.api.models;

import java.util.List;

public class ComparisonResponse {
    private boolean success;
    private List<ComparisonResult> results;
    private String error;

    public boolean isSuccess() { return success; }
    public void setSuccess(boolean success) { this.success = success; }

    public List<ComparisonResult> getResults() { return results; }
    public void setResults(List<ComparisonResult> results) { this.results = results; }
    
    public String getError() { return error; }
    public void setError(String error) { this.error = error; }
}
