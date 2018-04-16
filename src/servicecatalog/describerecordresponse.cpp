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

#include "describerecordresponse.h"
#include "describerecordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeRecordResponse
 *
 * \brief The DescribeRecordResponse class encapsulates ServiceCatalog DescribeRecord responses.
 *
 * \ingroup ServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::describeRecord
 */

/*!
 * @brief  Constructs a new DescribeRecordResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRecordResponse::DescribeRecordResponse(
        const DescribeRecordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeRecordResponsePrivate(this), parent)
{
    setRequest(new DescribeRecordRequest(request));
    setReply(reply);
}

const DescribeRecordRequest * DescribeRecordResponse::request() const
{
    Q_D(const DescribeRecordResponse);
    return static_cast<const DescribeRecordRequest *>(d->request);
}

/*!
 * @brief  Parse a ServiceCatalog DescribeRecord response.
 *
 * @param  response  Response to parse.
 */
void DescribeRecordResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeRecordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeRecordResponsePrivate
 *
 * \brief Private implementation for DescribeRecordResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeRecordResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRecordResponse instance.
 */
DescribeRecordResponsePrivate::DescribeRecordResponsePrivate(
    DescribeRecordResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ServiceCatalog DescribeRecordResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRecordResponsePrivate::parseDescribeRecordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRecordResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
