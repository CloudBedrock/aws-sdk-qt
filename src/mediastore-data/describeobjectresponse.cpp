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

#include "describeobjectresponse.h"
#include "describeobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::DescribeObjectResponse
 *
 * \brief The DescribeObjectResponse class encapsulates MediaStoreData DescribeObject responses.
 *
 * \ingroup MediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 *
 * \sa MediaStoreDataClient::describeObject
 */

/*!
 * @brief  Constructs a new DescribeObjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeObjectResponse::DescribeObjectResponse(
        const DescribeObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreDataResponse(new DescribeObjectResponsePrivate(this), parent)
{
    setRequest(new DescribeObjectRequest(request));
    setReply(reply);
}

const DescribeObjectRequest * DescribeObjectResponse::request() const
{
    Q_D(const DescribeObjectResponse);
    return static_cast<const DescribeObjectRequest *>(d->request);
}

/*!
 * @brief  Parse a MediaStoreData DescribeObject response.
 *
 * @param  response  Response to parse.
 */
void DescribeObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeObjectResponsePrivate
 *
 * \brief Private implementation for DescribeObjectResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeObjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeObjectResponse instance.
 */
DescribeObjectResponsePrivate::DescribeObjectResponsePrivate(
    DescribeObjectResponse * const q) : MediaStoreDataResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MediaStoreData DescribeObjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeObjectResponsePrivate::parseDescribeObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeObjectResponse"));
    /// @todo
}

} // namespace MediaStoreData
} // namespace QtAws
