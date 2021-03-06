/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeuserpoolresponse.h"
#include "describeuserpoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolResponse
 * \brief The DescribeUserPoolResponse class provides an interace for CognitoIdentityProvider DescribeUserPool responses.
 *
 * \inmodule QtAwsCognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::describeUserPool
 */

/*!
 * Constructs a DescribeUserPoolResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUserPoolResponse::DescribeUserPoolResponse(
        const DescribeUserPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeUserPoolResponsePrivate(this), parent)
{
    setRequest(new DescribeUserPoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUserPoolRequest * DescribeUserPoolResponse::request() const
{
    Q_D(const DescribeUserPoolResponse);
    return static_cast<const DescribeUserPoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CognitoIdentityProvider DescribeUserPool \a response.
 */
void DescribeUserPoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeUserPoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolResponsePrivate
 * \brief The DescribeUserPoolResponsePrivate class provides private implementation for DescribeUserPoolResponse.
 * \internal
 *
 * \inmodule QtAwsCognitoIdentityProvider
 */

/*!
 * Constructs a DescribeUserPoolResponsePrivate object with public implementation \a q.
 */
DescribeUserPoolResponsePrivate::DescribeUserPoolResponsePrivate(
    DescribeUserPoolResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * Parses a CognitoIdentityProvider DescribeUserPool response element from \a xml.
 */
void DescribeUserPoolResponsePrivate::parseDescribeUserPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserPoolResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
