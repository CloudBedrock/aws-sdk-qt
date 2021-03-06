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

#include "getfieldlevelencryptionresponse.h"
#include "getfieldlevelencryptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionResponse
 * \brief The GetFieldLevelEncryptionResponse class provides an interace for CloudFront GetFieldLevelEncryption responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryption
 */

/*!
 * Constructs a GetFieldLevelEncryptionResponse object for \a reply to \a request, with parent \a parent.
 */
GetFieldLevelEncryptionResponse::GetFieldLevelEncryptionResponse(
        const GetFieldLevelEncryptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetFieldLevelEncryptionResponsePrivate(this), parent)
{
    setRequest(new GetFieldLevelEncryptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFieldLevelEncryptionRequest * GetFieldLevelEncryptionResponse::request() const
{
    Q_D(const GetFieldLevelEncryptionResponse);
    return static_cast<const GetFieldLevelEncryptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront GetFieldLevelEncryption \a response.
 */
void GetFieldLevelEncryptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetFieldLevelEncryptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionResponsePrivate
 * \brief The GetFieldLevelEncryptionResponsePrivate class provides private implementation for GetFieldLevelEncryptionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetFieldLevelEncryptionResponsePrivate object with public implementation \a q.
 */
GetFieldLevelEncryptionResponsePrivate::GetFieldLevelEncryptionResponsePrivate(
    GetFieldLevelEncryptionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront GetFieldLevelEncryption response element from \a xml.
 */
void GetFieldLevelEncryptionResponsePrivate::parseGetFieldLevelEncryptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFieldLevelEncryptionResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
