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

#include "describebackupsresponse.h"
#include "describebackupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::DescribeBackupsResponse
 *
 * \brief The DescribeBackupsResponse class provides an interace for CloudHSMV2 DescribeBackups responses.
 *
 * \ingroup CloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHSMV2Client::describeBackups
 */

/*!
 * @brief  Constructs a new DescribeBackupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeBackupsResponse::DescribeBackupsResponse(
        const DescribeBackupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMV2Response(new DescribeBackupsResponsePrivate(this), parent)
{
    setRequest(new DescribeBackupsRequest(request));
    setReply(reply);
}

const DescribeBackupsRequest * DescribeBackupsResponse::request() const
{
    Q_D(const DescribeBackupsResponse);
    return static_cast<const DescribeBackupsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudHSMV2 DescribeBackups response.
 *
 * @param  response  Response to parse.
 */
void DescribeBackupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeBackupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeBackupsResponsePrivate
 *
 * \brief Private implementation for DescribeBackupsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeBackupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeBackupsResponse instance.
 */
DescribeBackupsResponsePrivate::DescribeBackupsResponsePrivate(
    DescribeBackupsResponse * const q) : CloudHSMV2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudHSMV2 DescribeBackupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeBackupsResponsePrivate::parseDescribeBackupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBackupsResponse"));
    /// @todo
}

} // namespace CloudHSMV2
} // namespace QtAws
