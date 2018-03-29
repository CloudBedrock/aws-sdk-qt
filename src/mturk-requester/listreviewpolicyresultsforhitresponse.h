/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTREVIEWPOLICYRESULTSFORHITRESPONSE_H
#define QTAWS_LISTREVIEWPOLICYRESULTSFORHITRESPONSE_H

#include "mturkresponse.h"
#include "listreviewpolicyresultsforhitrequest.h"

namespace AWS {

namespace MTurk {

class ListReviewPolicyResultsForHITResponsePrivate;

class QTAWS_EXPORT ListReviewPolicyResultsForHITResponse : public MTurkResponse {
    Q_OBJECT

public:
    ListReviewPolicyResultsForHITResponse(const ListReviewPolicyResultsForHITRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReviewPolicyResultsForHITRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListReviewPolicyResultsForHITResponse)
    Q_DISABLE_COPY(ListReviewPolicyResultsForHITResponse)

};

} // namespace MTurk
} // namespace AWS

#endif
