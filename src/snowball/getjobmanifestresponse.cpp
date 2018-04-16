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

#include "getjobmanifestresponse.h"
#include "getjobmanifestresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::GetJobManifestResponse
 *
 * \brief The GetJobManifestResponse class provides an interace for Snowball GetJobManifest responses.
 *
 * \ingroup Snowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure appliances to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snowball commands described
 *  here provide access to the same functionality that is available in the AWS Snowball Management Console, which enables
 *  you to create and manage jobs for Snowball. To transfer data locally with a Snowball appliance, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for Snowball. For more information, see the <a
 *  href="http://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::getJobManifest
 */

/*!
 * @brief  Constructs a new GetJobManifestResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobManifestResponse::GetJobManifestResponse(
        const GetJobManifestRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new GetJobManifestResponsePrivate(this), parent)
{
    setRequest(new GetJobManifestRequest(request));
    setReply(reply);
}

const GetJobManifestRequest * GetJobManifestResponse::request() const
{
    Q_D(const GetJobManifestResponse);
    return static_cast<const GetJobManifestRequest *>(d->request);
}

/*!
 * @brief  Parse a Snowball GetJobManifest response.
 *
 * @param  response  Response to parse.
 */
void GetJobManifestResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetJobManifestResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetJobManifestResponsePrivate
 *
 * \brief Private implementation for GetJobManifestResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetJobManifestResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobManifestResponse instance.
 */
GetJobManifestResponsePrivate::GetJobManifestResponsePrivate(
    GetJobManifestResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Snowball GetJobManifestResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobManifestResponsePrivate::parseGetJobManifestResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobManifestResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace QtAws
