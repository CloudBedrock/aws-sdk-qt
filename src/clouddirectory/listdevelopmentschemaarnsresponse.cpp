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

#include "listdevelopmentschemaarnsresponse.h"
#include "listdevelopmentschemaarnsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ListDevelopmentSchemaArnsResponse
 *
 * \brief The ListDevelopmentSchemaArnsResponse class provides an interace for CloudDirectory ListDevelopmentSchemaArns responses.
 *
 * \ingroup CloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 *
 * \sa CloudDirectoryClient::listDevelopmentSchemaArns
 */

/*!
 * @brief  Constructs a new ListDevelopmentSchemaArnsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDevelopmentSchemaArnsResponse::ListDevelopmentSchemaArnsResponse(
        const ListDevelopmentSchemaArnsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListDevelopmentSchemaArnsResponsePrivate(this), parent)
{
    setRequest(new ListDevelopmentSchemaArnsRequest(request));
    setReply(reply);
}

const ListDevelopmentSchemaArnsRequest * ListDevelopmentSchemaArnsResponse::request() const
{
    Q_D(const ListDevelopmentSchemaArnsResponse);
    return static_cast<const ListDevelopmentSchemaArnsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudDirectory ListDevelopmentSchemaArns response.
 *
 * @param  response  Response to parse.
 */
void ListDevelopmentSchemaArnsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDevelopmentSchemaArnsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListDevelopmentSchemaArnsResponsePrivate
 *
 * \brief Private implementation for ListDevelopmentSchemaArnsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListDevelopmentSchemaArnsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDevelopmentSchemaArnsResponse instance.
 */
ListDevelopmentSchemaArnsResponsePrivate::ListDevelopmentSchemaArnsResponsePrivate(
    ListDevelopmentSchemaArnsResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudDirectory ListDevelopmentSchemaArnsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDevelopmentSchemaArnsResponsePrivate::parseListDevelopmentSchemaArnsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevelopmentSchemaArnsResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
